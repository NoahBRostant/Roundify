---------------------------------- Option 1 -----------------------------------

[MeterOption1]
Meter=Shape
X=(#WindowWidth#-#SidebarWidth#)/2
Y=(44+[MeterTitle:H])+20
Shape=Rectangle 0,0,360,#Option1Height#,#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterBGOption1]
Meter=Shape
Container=MeterOption1
X=0
Y=0
Shape=Rectangle 0,0,[MeterOption1:W],[MeterOption1:H],#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterTextOption1]
Meter=String
Container=MeterOption1
X=10
Y=([MeterOption1:H]/2)+2
StringAlign=LeftCenter
FontColor=#Color7#
FontSize=16
AntiAlias=1

[MeterDownArrowOption1]
Meter=String
Container=MeterOption1
X=([MeterOption1:W]-10)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterRightArrowOption1]
Meter=String
Container=MeterOption1
X=([MeterOption1:W]-12)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
Text=[\xf105]
DynamicVariables=1

[MeterToggleOption1]
Meter=String
Container=MeterOption1
X=([MeterOption1:W]-10)-([MeterRightArrowOption1:W]+[MeterDownArrowOption1:W])*1.5
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color8#
FontSize=18
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterOtherSetting1Option1]

[MeterOtherSetting2Option1]

[MeterOtherSetting3Option1]

[MeterOtherSetting4Option1]

---------------------------------- Option 2 -----------------------------------

[MeterOption2]
Meter=Shape
X=(#WindowWidth#-#SidebarWidth#)/2
Y=10R
Shape=Rectangle 0,0,360,#Option2Height#,#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterBGOption2]
Meter=Shape
Container=MeterOption2
X=0
Y=0
Shape=Rectangle 0,0,[MeterOption2:W],[MeterOption2:H],#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterTextOption2]
Meter=String
Container=MeterOption2
X=10
Y=25
StringAlign=LeftCenter
FontColor=#Color7#
FontSize=16
AntiAlias=1

[MeterDownArrowOption2]
Meter=String
Container=MeterOption2
X=([MeterOption2:W]-10)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterRightArrowOption2]
Meter=String
Container=MeterOption2
X=([MeterOption2:W]-12)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
Text=[\xf105]
DynamicVariables=1

[MeterToggleOption2]
Meter=String
Container=MeterOption2
X=([MeterOption2:W]-10)-([MeterRightArrowOption2:W]+[MeterDownArrowOption2:W])*1.5
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color8#
FontSize=18
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterOtherSetting1Option2]

[MeterOtherSetting2Option2]

[MeterOtherSetting3Option2]

[MeterOtherSetting4Option2]

---------------------------------- Option 3 -----------------------------------

[MeterOption3]
Meter=Shape
X=(#WindowWidth#-#SidebarWidth#)/2
Y=10R
Shape=Rectangle 0,0,360,#Option3Height#,#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterBGOption3]
Meter=Shape
Container=MeterOption3
X=0
Y=0
Shape=Rectangle 0,0,[MeterOption3:W],[MeterOption3:H],#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterTextOption3]
Meter=String
Container=MeterOption3
X=10
Y=25
StringAlign=LeftCenter
FontColor=#Color7#
FontSize=16
AntiAlias=1

[MeterDownArrowOption3]
Meter=String
Container=MeterOption3
X=([MeterOption3:W]-10)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterRightArrowOption3]
Meter=String
Container=MeterOption3
X=([MeterOption3:W]-12)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
Text=[\xf105]
DynamicVariables=1

[MeterToggleOption3]
Meter=String
Container=MeterOption3
X=([MeterOption3:W]-10)-([MeterRightArrowOption3:W]+[MeterDownArrowOption3:W])*1.5
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color8#
FontSize=18
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterOtherSetting1Option3]

[MeterOtherSetting2Option3]

[MeterOtherSetting3Option3]

[MeterOtherSetting4Option3]

[MeterOtherSetting5Option3]

[MeterOtherSetting6Option3]

[MeterOtherSetting7Option3]

[MeterOtherSetting8Option3]

---------------------------------- Option 4 -----------------------------------

[MeterOption4]
Meter=Shape
X=(#WindowWidth#-#SidebarWidth#)/2
Y=10R
Shape=Rectangle 0,0,360,#Option4Height#,#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterBGOption4]
Meter=Shape
Container=MeterOption4
X=0
Y=0
Shape=Rectangle 0,0,[MeterOption4:W],[MeterOption4:H],#WindowRadius# | Fill Color #Color2# | StrokeWidth 0
DynamicVariables=1

[MeterTextOption4]
Meter=String
Container=MeterOption4
X=10
Y=25
StringAlign=LeftCenter
FontColor=#Color7#
FontSize=16
AntiAlias=1

[MeterDownArrowOption4]
Meter=String
Container=MeterOption4
X=([MeterOption4:W]-10)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterRightArrowOption4]
Meter=String
Container=MeterOption4
X=([MeterOption4:W]-12)
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color7#,180
FontSize=16
StringAlign=RightCenter
AntiAlias=1
Text=[\xf105]
DynamicVariables=1

[MeterToggleOption4]
Meter=String
Container=MeterOption4
X=([MeterOption4:W]-10)-([MeterRightArrowOption4:W]+[MeterDownArrowOption4:W])*1.5
Y=25
FontFace=Font Awesome 6 Free Solid
FontColor=#Color8#
FontSize=18
StringAlign=RightCenter
AntiAlias=1
DynamicVariables=1

[MeterOtherSetting1Option4]

[MeterOtherSetting2Option4]

[MeterOtherSetting3Option4]

[MeterOtherSetting4Option4]
