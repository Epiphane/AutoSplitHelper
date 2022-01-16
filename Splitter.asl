/*
IntroDone
Schematic_Tutorial1_C
Schematic_Tutorial1_5_C
Schematic_Tutorial2_C
Schematic_Tutorial3_C
Schematic_Tutorial4_C
Schematic_Tutorial5_C
Schematic_2-5_C
Schematic_2-1_C
*/

state("FactoryGame-Win64-Shipping") {}

startup {
  string logPath = Environment.ExpandEnvironmentVariables("%LOCALAPPDATA%\\FactoryGame\\Saved\\Logs\\FactoryGame.log");
  try { // Wipe the log file to clear out messages from last time
    FileStream fs = new FileStream(logPath, FileMode.Open, FileAccess.Write, FileShare.ReadWrite);
    fs.SetLength(0);
    fs.Close();
  } catch {} // May fail if file doesn't exist.
  
  vars.triggers = new List<string> {};
}

init {
  string logPath = Environment.ExpandEnvironmentVariables("%LOCALAPPDATA%\\FactoryGame\\Saved\\Logs\\FactoryGame.log");

  try { // Wipe the log file to clear out messages from last time
    FileStream fs = new FileStream(logPath, FileMode.Open, FileAccess.Write, FileShare.ReadWrite);
    fs.SetLength(0);
    fs.Close();
  } catch {} // May fail if file doesn't exist.
  vars.reader = new StreamReader(new FileStream(logPath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite)); 
  vars.line = null;

  vars.triggers = new List<string> {
    "Schematic_Tutorial1_C",
    "Schematic_Tutorial1_5_C",
    "Schematic_Tutorial2_C",
    // "Schematic_Tutorial3_C",
    "Schematic_Tutorial4_C",
    "Schematic_Tutorial5_C",
    "Schematic_2-5_C",
    "Schematic_2-1_C",
    "SetGamePhase: 1",
  };
}

update {
  while (vars.reader != null) {
    vars.line = vars.reader.ReadLine();
    if (vars.line == null) return false; // If no line was read, don't run any other blocks.
    int index = vars.line.IndexOf("LogAutoSplitMod");
    if (index < 0) continue; // Filter out error-level logging, as it can be spammy when bots get stuck
    break;
  }
}

start {
  if (vars.line == null) return false; // If there is no logfile, don't run this block.
  if (vars.line.IndexOf("Intro Done") >= 0) {
    return true;
  }
  return false;
}

split {
  if (vars.line == null) return false; // If there is no logfile, don't run this block.

  string goal = vars.triggers[0];
  if (vars.line.IndexOf(goal) < 0) {
    return false;
  }

  vars.triggers.RemoveAt(0);
  return true;
}

reset {
    if (vars.line == null) return false;
    if (vars.line.IndexOf("Game session ending") < 0) {
        return false;
    }

    return true;
}
