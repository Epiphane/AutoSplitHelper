@echo off

call "C:\Program Files\Unreal Engine - CSS\Engine\Build\BatchFiles\Build.bat" Win64 Shipping "-Project=%cd%\FactoryGame.uproject" FactoryGame
cp "Plugins\AutoSplitHelper\Binaries\Win64\FactoryGame-AutoSplitHelper-Win64-Shipping.dll" "C:\Program Files (x86)\Steam\steamapps\common\Satisfactory\FactoryGame\Mods\AutoSplitHelper\Binaries\Win64"
cp "Plugins\AutoSplitHelper\Binaries\Win64\FactoryGame-AutoSplitHelper-Win64-Shipping.pdb" "C:\Program Files (x86)\Steam\steamapps\common\Satisfactory\FactoryGame\Mods\AutoSplitHelper\Binaries\Win64"
