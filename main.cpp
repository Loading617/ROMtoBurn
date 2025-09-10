#include <CtrlLib/CtrlLib.h>
using namespace Upp;

struct ROMtoBurn : TopWindow {
   MenuBar menu;
   
   void FileMenu(Bar& bar) {
      bar.Add("Open ROM...", [=] { PromptOK(""); });
      bar.Add("Open ROM Folder...", [=] { PromptOK(""); });
      bar.Add("Add to Project / Queue", [=] { PromptOK(""); });
      bar.Add("Save Project", [=] { PromptOK(""); });
      bar.Add("Load Project", [=] { PromptOK(""); });
      bar.Add("Exit", [=] { Exit(); });
   }
   
   void EditMenu(Bar& bar) {
      bar.Add("Preferences / Settings", [=] { PromptOK(""); });
      bar.Add("Clear Queue", [=] { PromptOK(""); });
      bar.Add("Rename Project", [=] { PromptOK(""); });
      bar.Add("Remove Selected ROM(s)", [=] { PromptOK(""); });
      bar.Add("Select All", [=] { PromptOK(""); });
   }
   
   void BurnMenu(Bar& bar) {
      bar.Add("Burn to Disc...", [=] { PromptOK(""); });
      bar.Add("Burn ISO Image...", [=] { PromptOK(""); });
      bar.Add("Create ISO from ROM(s)...", [=] { PromptOK(""); });
      bar.Add("Verify Disc", [=] { PromptOK(""); });
      bar.Add("Erase Rewritable Disc", [=] { PromptOK(""); });
   }
   
   void ToolsMenu(Bar& bar) {
      bar.Add("Disc Info (capacity, free space & type)", [=] { PromptOK(""); });
      bar.Add("Calculate Burn Size", [=] { PromptOK(""); });
      bar.Add("ROM Checker (hash/CRC check for integrity)", [=] { PromptOK(""); });
      bar.Add("Convert ROM", [=] { PromptOK(""); });
      bar.Add("Disc Speed Test", [=] { PromptOK(""); });
   }
   
   void ViewMenu(Bar& bar) {
      bar.Add("Show Queue / Project List", [=] { PromptOK(""); });
      bar.Add("Show Burn Log / Console", [=] { PromptOK(""); });
      bar.Add("Show Disc Info", [=] { PromptOK(""); });
      bar.Add("Themes (Light/Dark)", [=] { PromptOK(""); });
   }
   
   void HelpMenu(Bar& bar) {
      bar.Add("User Guide", [=] { PromptOK(""); });
      bar.Add("Keyboard Shortcuts", [=] { PromptOK(""); });
      bar.Add("Check for Updates", [=] { PromptOK(""); });
      bar.Add("About", [=] { PromptOK(""); });
   }
   
   void MainMenu(Bar& bar) {
       bar.Sub("File", [=](Bar& bar) { FileMenu(bar); });
       bar.Sub("Edit", [=](Bar& bar) { EditMenu(bar); });
       bar.Sub("Burn", [=](Bar& bar) { BurnMenu(bar); });
       bar.Sub("Tools", [=](Bar& bar) { ToolsMenu(bar); });
       bar.Sub("View", [=](Bar& bar) { ViewMenu(bar); });
       bar.Sub("Help", [=](Bar& bar) { HelpMenu(bar); });
   }
   

ROMtoBurn() {
	Title("ROMtoBurn").Sizeable().MinimizeBox().MaximizeBox();
	AddFrame(menu);
	menu.Set([=](Bar& bar) { MainMenu(bar); });
   }
   
};

GUI_APP_MAIN
{
	ROMtoBurn app;
	app.Run();
}
