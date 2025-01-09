state("FactoryGameSteam-Win64-Shipping") {}
state("FactoryGameEGS") {}

startup {
  vars.logPath = Environment.ExpandEnvironmentVariables("%LOCALAPPDATA%\\FactoryGame\\Saved\\Logs\\FactoryGame.log");
  try { // Wipe the log file to clear out messages from last time
    FileStream fs = new FileStream(vars.logPath, FileMode.Open, FileAccess.Write, FileShare.ReadWrite);
    fs.SetLength(0);
    fs.Close();
  } catch {} // May fail if file doesn't exist.
  vars.SplitTriggers = new Dictionary<string, string>()
  {
    // HUB Upgrades (Tier 0)
    { "HUB Upgrade 1".ToLower(),    "Schematic_Tutorial1_C" },
    { "HUB Upgrade 2".ToLower(),    "Schematic_Tutorial1_5_C" },
    { "HUB Upgrade 3".ToLower(),    "Schematic_Tutorial2_C" },
    { "HUB Upgrade 4".ToLower(),    "Schematic_Tutorial3_C" },
    { "HUB Upgrade 5".ToLower(),    "Schematic_Tutorial4_C" },
    { "HUB Upgrade 6".ToLower(),    "Schematic_Tutorial5_C" },

    // Tier 1
    { "Base Building".ToLower(),    "Schematic_1-1_C" },
    { "Logistics".ToLower(),        "Schematic_1-2_C" },
    { "Field Research".ToLower(),   "Schematic_1-3_C" },

    // Tier 2
    { "Part Assembly".ToLower(),                "Schematic_2-1_C" },
    { "Obstacle Clearing".ToLower(),            "Schematic_2-2_C" },
    { "Jump Pads".ToLower(),                    "Schematic_2-3_C" },
    { "Resource Sink Bonus Program".ToLower(),  "Schematic_2-5_C" },

    // Tier 3
    { "Coal Power".ToLower(),                   "Schematic_3-1_C" },
    { "Logistics Mk.2".ToLower(),               "Schematic_3-2_C" },
    { "Vehicular Transport".ToLower(),          "Schematic_3-3_C" },
    { "Basic Steel Production".ToLower(),       "Schematic_3-4_C" },

    // Tier 4
    { "Advanced Steel Production".ToLower(),    "Schematic_4-1_C" },
    { "Enhanced Asset Security".ToLower(),      "Schematic_4-2_C" },
    { "Expanded Power Infrastructure".ToLower(),"Schematic_4-3_C" },
    { "Hypertubes".ToLower(),                   "Schematic_4-4_C" },
    { "FICSIT Blueprints".ToLower(),            "Schematic_4-5_C" },

    // Tier 5
    { "Oil Processing".ToLower(),               "Schematic_5-1_C" },
    { "Oil Processing 2".ToLower(),             "Schematic_5-1-1_C" },
    { "Industrial Manufacturing".ToLower(),     "Schematic_5-2_C" },
    { "Logistics Mk.3".ToLower(),               "Schematic_5-3_C" },
    { "Fluid Packaging".ToLower(),              "Schematic_5-4_C" },
    { "Alternative Fluid Transport 2".ToLower(),"Schematic_5-4-1_C" },
    { "Petroleum Power".ToLower(),              "Schematic_5-5_C" },
    { "Petroleum Power 2".ToLower(),            "Schematic_5-5-1_C" },

    // Tier 6
    { "Logistics Mk.4".ToLower(),               "Schematic_6-1_C" },
    { "Jetpack".ToLower(),                      "Schematic_6-2_C" },
    { "Monorail Train Technology".ToLower(),    "Schematic_6-3_C" },
    { "Pipeline Engineering Mk.2".ToLower(),    "Schematic_6-5_C" },
    { "FICSIT Blueprints Mk.2".ToLower(),       "Schematic_6-6_C" },
    { "Railway Signaling".ToLower(),            "Schematic_6-7_C" },
    
    // Tier 7
    { "Bauxite Refinement".ToLower(),           "Schematic_7-1_C" },
    { "Bauxite Refinement 2".ToLower(),         "Schematic_7-1-1_C" },
    { "Logistics Mk.5".ToLower(),               "Schematic_7-2_C" },
    { "Hazmat Suit".ToLower(),                  "Schematic_7-3_C" },
    { "Aeronautical Engineering".ToLower(),     "Schematic_7-4_C" },
    { "Control System Development 2".ToLower(), "Schematic_7-4-1_C" },
    { "Control System Development".ToLower(),   "Schematic_7-5_C" },
    
    // Tier 8
    { "Nuclear Power".ToLower(),                  "Schematic_8-1_C" },
    { "Advanced Aluminum Production".ToLower(),   "Schematic_8-2_C" },
    { "Advanced Aluminum Production 2".ToLower(), "Schematic_8-2-1_C" },
    { "Hover Pack".ToLower(),                     "Schematic_8-3_C" },
    { "Leading-edge Production".ToLower(),        "Schematic_8-4_C" },
    { "Particle Enrichment".ToLower(),            "Schematic_8-5_C" },
    { "Particle Enrichment 2".ToLower(),          "Schematic_8-5-1_C" },

    // Tier 9
    { "Matter Conversion".ToLower(),              "Schematic_9-1_C" },
    { "Matter Conversion - Background Unlocks".ToLower(),
                                                  "Schematic_9-1-1_C" },
    { "Quantum Encoding".ToLower(),               "Schematic_9-2_C" },
    { "FICSIT Blueprints Mk.3".ToLower(),         "Schematic_9-3_C" },
    { "Spatial Energy Regulation".ToLower(),      "Schematic_9-4_C" },
    { "Peak Efficiency".ToLower(),                "Schematic_9-5_C" },

    // Space Elevator
    { "Send Package 1".ToLower(), "Sending Space Elevator: GP_Project_Assembly_Phase_0" },
    { "Send Package 2".ToLower(), "Sending Space Elevator: GP_Project_Assembly_Phase_1" },
    { "Send Package 3".ToLower(), "Sending Space Elevator: GP_Project_Assembly_Phase_2" },
    { "Send Package 4".ToLower(), "Sending Space Elevator: GP_Project_Assembly_Phase_3" },
    { "Send Package 5".ToLower(), "Sending Space Elevator: GP_Project_Assembly_Phase_4" },
    { "Finish".ToLower(), "SetGamePhase: GP_Project_Assembly_Phase_6" },

    // Other
    { "Send Package".ToLower(), "Sending Space Elevator: " }, // Catches all packages
    { "Overclocking".ToLower(), "Research_PowerSlugs_2_C" }, // Overclocking in the MAM
  };

  // Aliases
  vars.SplitTriggers["HUB Upgrade 4/5".ToLower()] = vars.SplitTriggers["HUB Upgrade 5".ToLower()];
  vars.SplitTriggers["Awesome Sink".ToLower()]    = vars.SplitTriggers["Resource Sink Bonus Program".ToLower()];
  vars.SplitTriggers["Launch".ToLower()]          = vars.SplitTriggers["Send Package".ToLower()];
  vars.SplitTriggers["Space Elevator".ToLower()]  = vars.SplitTriggers["Send Package".ToLower()];
  vars.SplitTriggers["Package".ToLower()]         = vars.SplitTriggers["Send Package".ToLower()];
  vars.SplitTriggers["Improved Melee Combat".ToLower()] = vars.SplitTriggers["Enhanced Asset Security".ToLower()];
  vars.SplitTriggers["Alternative Fluid Transport".ToLower()] = vars.SplitTriggers["Fluid Packaging".ToLower()];

  // Settings
  settings.Add("reset_on_exit", true, "Reset timer when exiting game");
  settings.Add("ignore_warnings", false, "Ignore split name warnings");
}

init {
  try { // Wipe the log file to clear out messages from last time
    FileStream fs = new FileStream(vars.logPath, FileMode.Open, FileAccess.Write, FileShare.ReadWrite);
    fs.SetLength(0);
    fs.Close();
  } catch {} // May fail if file doesn't exist.

  vars.reader = new StreamReader(new FileStream(vars.logPath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite)); 
  vars.line = null;
  vars.trigger = null;
  vars.modActive = false;
  
  do {
    vars.line = vars.reader.ReadLine();
  } while (vars.reader != null && vars.line != null);
  
  if (!settings["ignore_warnings"]) {
    if (timer.Run == null) {
      if (MessageBox.Show(
        "No run information available, can't inspect split names. Please reach out to me by clicking Yes",
        "AutoSplit Error",
        MessageBoxButtons.YesNo,
        MessageBoxIcon.Error
      ) == DialogResult.Yes) {
        Process.Start("https://github.com/Epiphane/AutoSplitHelper/blob/master/FAQ.md");
      }
    }
    else {
      foreach (var split in timer.Run) {
        if (!vars.SplitTriggers.ContainsKey(split.Name.ToLower())) {
          if (MessageBox.Show(
            "Split name not recognized: '" + split.Name + "'.\nYou will have to manually split for '" + split.Name + "'\n\nPress YES to open the FAQ page",
            "AutoSplit Error",
            MessageBoxButtons.YesNo,
            MessageBoxIcon.Error
          ) == DialogResult.Yes) {
            Process.Start("https://github.com/Epiphane/AutoSplitHelper/blob/master/FAQ.md");
          }
        }
      }
    }
  }
}

update {
  if (timer != null) {
    if (timer.CurrentSplit != null && vars.SplitTriggers.ContainsKey(timer.CurrentSplit.Name.ToLower())) {
      vars.trigger = vars.SplitTriggers[timer.CurrentSplit.Name.ToLower()];
    }
    else {
      vars.trigger = null;
    }
  }
  
  while (vars.reader != null) {
    vars.line = vars.reader.ReadLine();
    // If nothing was read, don't run any other blocks.
    if (vars.line == null) {
      return false;
    }

    int index;
    if (!vars.modActive) {
      index = vars.line.IndexOf("AutoSplitHelper");
      if (index >= 0) {
        print("AutoSplitHelper mod detected");
        vars.modActive = true;
      }

      index = vars.line.IndexOf("Starting Game");
      if (index >= 0) {
        if (!settings["ignore_warnings"]) {
          if (MessageBox.Show(
            "Satisfactory AutoSplitHelper mod not detected, splits will not be recorded automatically. Make sure you have mods enabled!\n\nTo install AutoSplitHelper, click Yes",
            "AutoSplit Error",
            MessageBoxButtons.YesNo,
            MessageBoxIcon.Error
          ) == DialogResult.Yes) {
            Process.Start("https://github.com/Epiphane/AutoSplitHelper/blob/master/README.md#game-mod");
          }
        }
        
        return false;
      }
    }

    // We only care about AutoSplitHelper logs
    index = vars.line.IndexOf("LogAutoSplitHelper: ");
    if (index < 0) {
      continue;
    }

    vars.line = vars.line.Substring(index + 20);
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
  if (vars.trigger == null) return false; // If there is no trigger, don't run this block.

  if (vars.line.IndexOf(vars.trigger) < 0) {
    return false;
  }

  return true;
}

reset {
  if (!settings["reset_on_exit"]) {
    // Never reset if the setting is disabled
    return false;
  }

  if (vars.line == null) return false; // If there is no logfile, don't run this block.
  if (vars.line.IndexOf("Game session ending") >= 0) {
    print("RESETTING");
    return true;
  }

  return false;
}
