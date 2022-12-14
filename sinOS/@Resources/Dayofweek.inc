[Variables]

;;;;;;;;;;;;;;;;;;;;;;SYSTEM VARIABLES SETTINGS;;;;;;;;;;;;;;;;;;;;;

;Folder Theme Color - folder color, mouse on, text color
;Folder Tint Color
VColor1=	0,180,0,255
;System Font Color
VColor4=	255,255,255,255
VColor2=	20,180,130,200
VColor3=	20,180,130,200

;Fonts 
;MouseOver Folder
VFont1=		Gabriola
;MouseOver System
VFont2=		Century Gothic

;Folder Scale
VScale=	1.0

;;;;;;;;;;;;;;;;;;;;;;;;WIFI;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

WIFIColor=	180,180,180,150
WIFIScale=  1.0

;;;;;;;;;;;;;;;;;;;;;;;;BLUETOOTH;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

BTColorOn=	0,125,208,255
BTColorOff=	180,180,180,150
BTScale=    1.0

;;;;;;;;;;;;;;;;;;;;;;;BRIGHTNESS SETTINGS;;;;;;;;;;;;;;;;;;;;;;;;;;;

VolColor=	255,220,250,255
VolScale=	1.0

;;;;;;;;;;;;;;;;;;;;;;;BRIGHTNESS SETTINGS;;;;;;;;;;;;;;;;;;;;;;;;;;;

BrgColor=	255,180,50,255
BrgMOColor=	255,180,50,150
BrgScale=	1.0

;;;;;;;;;;;;;;;;;;;;;;;BIN SETTINGS;;;;;;;;;;;;;;;;;;;;;;;;;;;

BinColor=	0,100,0,255
BinMOColor=	0,100,0,150
BinScale=	1.0

;;;;;;;;;;;;;;;;;;;;;;;BATTERY SETTINGS;;;;;;;;;;;;;;;;;;;;;;;;;;;

BattColor=	220,255,255,255
BattScale=	1.0

;;;;;;;;;;;;;;;;;;;;;;SHOW FOLDER LINKS;;;;;;;;;;;;;;;;;;;;;

BTIconAndPath=#@#\Bth.png
TextNameBT=Bluetooth
LocationPathBT=[Shell:::{28803F59-3A75-4058-995F-4EE5503B023C}]

Icon4NameAndPath1=#@#\3d.png
TextName1=3D Objects
LocationPath1=[Shell:::{0DB7E03F-FC29-4DC6-9020-FF41B59E513A}]

Icon4NameAndPath2=#@#\Documents.png
TextName2=Documents
LocationPath2=["shell:DocumentsLibrary"]

Icon4NameAndPath3=#@#\Download.png
TextName3=Downloads
LocationPath3=["Shell:Downloads"]

Icon4NameAndPath4=#@#\Music.png
TextName4=Music
LocationPath4=["Shell:My Music"]

Icon4NameAndPath5=#@#\Pictures.png
TextName5=Pictures
LocationPath5=["Shell:My Pictures"]

Icon4NameAndPath6=#@#\Videos.png
TextName6=Videos
LocationPath6=["Shell:VideosLibrary"]

;;;;;;;;;;;;;;;;;;;;;;STYLES;;;;;;;;;;;;;;;;;;;;;

[StyleFolderIcon]
W=(50*#VScale#)
H=(50*#VScale#)
ImageTint=#VColor1#

[StyleFolderFont]
FontFace=#VFont1#
FontSize=20
FontColor=#VColor4#
X=(20*#VScale#)
Y=(25*#VScale#)

;Display System MouseOver Fonts
[StyleSystemFont]
FontColor=#VColor4#
FontFace=#VFont2#
FontSize=9


