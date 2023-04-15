// generated by Fast Light User Interface Designer (fluid) version 1.0305

#include "StracciatellaLauncher.h"

StracciatellaLauncher::StracciatellaLauncher() {
  { stracciatellaLauncher = new Fl_Double_Window(520, 380, "JA2 Stracciatella Launcher");
    stracciatellaLauncher->user_data((void*)(this));
    { tabs = new Fl_Tabs(0, 0, 520, 350);
      tabs->align(Fl_Align(FL_ALIGN_TOP_RIGHT));
      { Fl_Group* o = new Fl_Group(0, 50, 520, 300, "@> Play  ");
        o->labelsize(16);
        o->labelcolor((Fl_Color)24);
        { editorButton = new Fl_Button(160, 150, 200, 25, "Start Map Editor");
        } // Fl_Button* editorButton
        { playButton = new Fl_Button(160, 185, 200, 55, "Play Ja2 Stracciatella");
        } // Fl_Button* playButton
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 50, 520, 300, "@filenew Data ");
        o->labelcolor((Fl_Color)24);
        o->hide();
        { Fl_Group* o = new Fl_Group(10, 60, 500, 50);
          { gameDirectoryInput = new Fl_Input(20, 75, 440, 30, "JA2 Game Directory:");
            gameDirectoryInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
            Fl_Group::current()->resizable(gameDirectoryInput);
          } // Fl_Input* gameDirectoryInput
          { browseJa2DirectoryButton = new Fl_Button(470, 75, 30, 30, "@fileopen");
            browseJa2DirectoryButton->tooltip("Choose JA2 game directory.");
          } // Fl_Button* browseJa2DirectoryButton
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 110, 500, 50);
          { gameVersionInput = new Fl_Choice(20, 130, 440, 30, "Game Version:");
            gameVersionInput->down_box(FL_BORDER_BOX);
            gameVersionInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
            Fl_Group::current()->resizable(gameVersionInput);
          } // Fl_Choice* gameVersionInput
          { guessVersionButton = new Fl_Button(470, 130, 30, 30, "@search");
            guessVersionButton->tooltip("Guess Game Version");
          } // Fl_Button* guessVersionButton
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 265, 500, 25, "resizable");
          o->labeltype(FL_NO_LABEL);
          o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
          o->end();
          Fl_Group::current()->resizable(o);
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 170, 500, 50);
          { saveGameDirectoryInput = new Fl_Input(20, 185, 440, 30, "Save Game Directory:");
            saveGameDirectoryInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
            Fl_Group::current()->resizable(saveGameDirectoryInput);
          } // Fl_Input* saveGameDirectoryInput
          { browseSaveGameDirectoryButton = new Fl_Button(470, 185, 30, 30, "@fileopen");
            browseSaveGameDirectoryButton->tooltip("Choose JA2 game directory.");
          } // Fl_Button* browseSaveGameDirectoryButton
          o->end();
        } // Fl_Group* o
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 50, 520, 300, "@-> Mods ");
        o->labelcolor((Fl_Color)24);
        o->hide();
        { Fl_Group* o = new Fl_Group(10, 60, 500, 165);
          { enabledModsBrowser = new Fl_Browser(20, 75, 215, 150, "Enabled Mods:");
            enabledModsBrowser->type(3);
            enabledModsBrowser->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Browser* enabledModsBrowser
          { enableModsButton = new Fl_Button(245, 75, 30, 30, "@<");
            enableModsButton->tooltip("Enable one or multiple mods.");
            enableModsButton->deactivate();
          } // Fl_Button* enableModsButton
          { disableModsButton = new Fl_Button(245, 115, 30, 30, "@>");
            disableModsButton->tooltip("Disable one or multiple mods.");
            disableModsButton->deactivate();
          } // Fl_Button* disableModsButton
          { moveUpModsButton = new Fl_Button(245, 155, 30, 30, "@2<");
            moveUpModsButton->tooltip("Increase mod priority. If a resource file is present in multiple mods, the fi\
le from the mod with the highest priority is used.");
            moveUpModsButton->deactivate();
          } // Fl_Button* moveUpModsButton
          { moveDownModsButton = new Fl_Button(245, 195, 30, 30, "@8<");
            moveDownModsButton->tooltip("Decrease mod priority. If a resource file is present in multiple mods, the fi\
le from the mod with the highest priority is used.");
            moveDownModsButton->deactivate();
          } // Fl_Button* moveDownModsButton
          { availableModsBrowser = new Fl_Browser(285, 75, 215, 150, "Disabled Mods:");
            availableModsBrowser->type(3);
            availableModsBrowser->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Browser* availableModsBrowser
          o->end();
        } // Fl_Group* o
        { modDetails = new Fl_Text_Display(20, 235, 480, 100);
          modDetails->color((Fl_Color)55);
          modDetails->hide();
        } // Fl_Text_Display* modDetails
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(0, 50, 520, 300, "@menu Settings ");
        o->labelcolor((Fl_Color)24);
        o->hide();
        { Fl_Group* o = new Fl_Group(10, 60, 500, 45);
          { gameSettingsOutput = new Fl_Output(20, 75, 480, 30, "Game Settings:");
            gameSettingsOutput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
            Fl_Group::current()->resizable(gameSettingsOutput);
          } // Fl_Output* gameSettingsOutput
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 115, 500, 52);
          o->tooltip("Specify the resolution for tactical screen rendering. Texts and sprites becom\
e very small at higher internal resolutions. Note that menus and the strategic\
 map screen are always rendered at 640x480.");
          { resolutionXInput = new Fl_Value_Input(20, 130, 75, 30, "Internal Resolution:");
            resolutionXInput->minimum(640);
            resolutionXInput->maximum(0);
            resolutionXInput->value(640);
            resolutionXInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* resolutionXInput
          { new Fl_Box(95, 130, 20, 30, "x");
          } // Fl_Box* o
          { resolutionYInput = new Fl_Value_Input(115, 130, 75, 30);
            resolutionYInput->labeltype(FL_NO_LABEL);
            resolutionYInput->minimum(480);
            resolutionYInput->maximum(0);
            resolutionYInput->value(480);
            resolutionYInput->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* resolutionYInput
          { predefinedResolutionMenuButton = new Fl_Menu_Button(210, 130, 110, 30, "Predefined");
          } // Fl_Menu_Button* predefinedResolutionMenuButton
          { Fl_Group* o = new Fl_Group(415, 115, 30, 30, "resizable");
            o->labeltype(FL_NO_LABEL);
            o->align(Fl_Align(FL_ALIGN_TOP|FL_ALIGN_INSIDE));
            o->end();
            Fl_Group::current()->resizable(o);
          } // Fl_Group* o
          { invalidResolutionLabel = new Fl_Box(340, 130, 160, 30, "invalid!");
            invalidResolutionLabel->tooltip("the resolution must be at least 640x480, the original game resolution");
            invalidResolutionLabel->labelfont(1);
            invalidResolutionLabel->labelcolor((Fl_Color)1);
            invalidResolutionLabel->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
          } // Fl_Box* invalidResolutionLabel
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 170, 500, 55);
          o->tooltip("Choose a scaling mode to stretch the game video to fit the screen. Linear and\
 Near-Perfect modes stretch the video to match any window sizes, but the image\
 may look blurred. Pixel-Perfect can only scale up by integer (1x, 2x and so o\
n) but gives sharp images.");
          { scalingModeChoice = new Fl_Choice(20, 185, 480, 30, "Scaling Mode:");
            scalingModeChoice->down_box(FL_BORDER_BOX);
            scalingModeChoice->align(Fl_Align(FL_ALIGN_TOP_LEFT));
            Fl_Group::current()->resizable(scalingModeChoice);
          } // Fl_Choice* scalingModeChoice
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(10, 220, 500, 104);
          { fullscreenCheckbox = new Fl_Check_Button(20, 225, 95, 30, "Fullscreen");
            fullscreenCheckbox->tooltip("Check to run in a borderless full-screen window");
            fullscreenCheckbox->down_box(FL_DOWN_BOX);
          } // Fl_Check_Button* fullscreenCheckbox
          { playSoundsCheckbox = new Fl_Check_Button(20, 255, 109, 30, "Play Sounds");
            playSoundsCheckbox->down_box(FL_DOWN_BOX);
            playSoundsCheckbox->value(1);
          } // Fl_Check_Button* playSoundsCheckbox
          {
            stretchToFitCheckbox = new Fl_Check_Button(20, 289, 115, 35, "Stretch to fit");
            stretchToFitCheckbox->down_box(FL_DOWN_BOX);
            stretchToFitCheckbox->value(1);
          } // Fl_Check_Button* stretchToFitCheckbox
          o->end();
        } // Fl_Group* o
        o->end();
      } // Fl_Group* o
      { logsTab = new Fl_Group(0, 50, 520, 300, "@square Logs");
        logsTab->labelcolor((Fl_Color)24);
        logsTab->hide();
        { logsDisplay = new Fl_Text_Display(20, 95, 480, 250, "You can view the logs of the latest JA2 Stracciatella execution here. If you \
want to report a bug, please include them in your bug report.");
          logsDisplay->box(FL_DOWN_BOX);
          logsDisplay->align(Fl_Align(133));
          Fl_Group::current()->resizable(logsDisplay);
        } // Fl_Text_Display* logsDisplay
        logsTab->end();
      } // Fl_Group* logsTab
      tabs->end();
      Fl_Group::current()->resizable(tabs);
    } // Fl_Tabs* tabs
    { Fl_Group* o = new Fl_Group(0, 350, 465520, 30);
      { ja2JsonPathOutput = new Fl_Output(0, 350, 460, 30);
        ja2JsonPathOutput->tooltip("Path to stracciatella engine options");
        ja2JsonPathOutput->color(FL_BACKGROUND_COLOR);
        ja2JsonPathOutput->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
        Fl_Group::current()->resizable(ja2JsonPathOutput);
      } // Fl_Output* ja2JsonPathOutput
      { ja2JsonReloadBtn = new Fl_Button(460, 350, 30, 30, "@reload");
        ja2JsonReloadBtn->tooltip("Reload stracciatella engine options");
        ja2JsonReloadBtn->box(FL_THIN_UP_BOX);
        ja2JsonReloadBtn->labelcolor(FL_INACTIVE_COLOR);
      } // Fl_Button* ja2JsonReloadBtn
      { ja2JsonSaveBtn = new Fl_Button(490, 350, 30, 30, "@filesave");
        ja2JsonSaveBtn->tooltip("Save stracciatella engine options");
        ja2JsonSaveBtn->box(FL_THIN_UP_BOX);
        ja2JsonSaveBtn->labelcolor(FL_INACTIVE_COLOR);
      } // Fl_Button* ja2JsonSaveBtn
      o->end();
    } // Fl_Group* o
    stracciatellaLauncher->size_range(520, 390);
    stracciatellaLauncher->end();
  } // Fl_Double_Window* stracciatellaLauncher
}
