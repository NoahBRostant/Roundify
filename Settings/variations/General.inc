[Rainmeter]
OnRefreshAction=[!Delay 100][!CommandMeasure PSRM "Check"]

[Variables]

----------------------------------------------------- Styling ------------------------------------------------------

[StyleStartTrue]
EnterColor=#Color8#
LeaveColor=#Color8A#
LeftMouseUpAction=[!CommandMeasure PSRM "RemoveStartFolder"][!Delay 100][!Refresh]

[StyleStartFalse]
LeftMouseUpAction=[!CommandMeasure PSRM "StartFolder"][!Delay 100][!Refresh]

[StyleDesktTrue]
EnterColor=#Color8#
LeaveColor=#Color8A#
LeftMouseUpAction=[!CommandMeasure PSRM "RemoveDesktop"][!Delay 100][!Refresh]

[StyleDesktFalse]
LeftMouseUpAction=[!CommandMeasure PSRM "Desktop"][!Delay 100][!Refresh]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Powershell\AddShortcut.ps1

[Taskbar]
WindowTitle=Roundify Settings - General

[MeterTitle]
Text=General

---------------------------------------------------- Shortcuts ------------------------------------------------------

[MeterOption1]
Hidden=1

[MeterTextOption1]
Text="Shortcuts"

[MeterDownArrowOption1]
Text=[\xf107]
LeftMouseUpAction=[!WriteKeyValue Variables Option1DownArrow "(1-#Option1DownArrow#)"][!SetVariable Option1DownArrow "(1-#Option1DownArrow#)"][!UpdateMeasure MeasureToggleArrowShortcuts]
Hidden=0

[MeterRightArrowOption1]
LeftMouseUpAction=[]
Hidden=1

[MeasureDownArrowOption1]
Measure=Calc
Formula=1
DynamicVariables=1
ifEqualValue=#Option1DownArrow#=0
ifEqualAction=[!SetOption MeterDownArrowOption1 Text "[\xf106]"][!SetVariable Option1Height "110"]
ifAboveValue=#Option1DownArrow#=0
ifAboveAction=[!SetOption MeterDownArrowOption1 Text "[\xf107]"][!SetVariable Option1Height "50"]

[MeterToggleOption1]
Hidden=1

[MeterOtherSetting1Option1]
Meter=Shape
Container=MeterOption1
X=(([MeterOption1:W]/2)-10-[MeterOtherSetting3Option1:W])
Y=55
MeterStyle=StyleStartFalse
Shape=Rectangle 0,0,140,40,#WindowRadius# | Fill Color #ShortcutSSelect# | StrokeWidth #BorderWidth# | Stroke Color #BorderColor#,74
LeftMouseUpAction=[!CommandMeasure PSRM "StartFolder"][!Delay 100][!Refresh]
DynamicVariables=1

[MeterOtherSetting2Option1]
Meter=String
Container=MeterOption1
X=70r
Y=20r
W=140
H=40
FontFace=Segoe UI Variable Text
FontColor=#Color7#
FontSize=16
StringAlign=CenterCenter
AntiAlias=1
Text="Start"
DynamicVariables=1

[MeterOtherSetting3Option1]
Meter=Shape
Container=MeterOption1
X=(([MeterOption1:W]/2)+10)
Y=55
Shape=Rectangle 0,0,140,40,#WindowRadius# | Fill Color ShortcutDSelect | StrokeWidth #BorderWidth# | Stroke Color #BorderColor#,74
LeftMouseUpAction=[!CommandMeasure PSRM "Desktop"][!Delay 100][!Refresh]
DynamicVariables=1

[MeterOtherSetting4Option1]
Meter=String
Container=MeterOption1
X=70r
Y=20r
W=140
H=40
FontFace=Segoe UI Variable Text
FontColor=#Color7#
FontSize=16
StringAlign=CenterCenter
AntiAlias=1
Text="Desktop"
DynamicVariables=1

                                                -------------------------------- Settings Button --------------------------------

[MeterOption2]
Hidden=0

[MeterTextOption2]
Text="Enable Settings Button"

[MeterDownArrowOption2]
Hidden=1

[MeterRightArrowOption2]
Hidden=1

[MeterToggleOption2]
Text=[\xf205]
LeftMouseUpAction=[!WriteKeyValue Variables Option2Toggle "(1-#Option2Toggle#)"][!SetVariable Option2Toggle "(1-#Option2Toggle#)"][!UpdateMeasure MeasureOtherSetting1Option2]
Hidden=0

[MeasureOtherSetting1Option2]
Measure=Calc
Formula=1
DynamicVariables=1
ifEqualValue=#Option2Toggle#=0
ifEqualAction=[!SetOption MeterToggleOption2 Text "[\xf205]"][!SetOption MeterToggleOption2 FontColor "#Color8#"]
ifAboveValue=#Option2Toggle#=0
ifAboveAction=[!SetOption MeterToggleOption2 Text "[\xf204]"][!SetOption MeterToggleOption2 FontColor "#Color7#,180"]