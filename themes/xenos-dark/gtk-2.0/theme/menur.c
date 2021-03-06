style"menu"{
xthickness=1
ythickness=1
bg[NORMAL]=shade(1.1,@base_color)
bg[PRELIGHT]=shade(1.1,@base_color)
bg[INSENSITIVE]=shade(1.1,@base_color)
engine"pixmap"{
image{
function=SHADOW
detail="menu"
file="images/menu.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=SHADOW
shadow=OUT
file="images/none.svg"
stretch=TRUE}}}
widget"*GtkWindow.gtk-combobox-popup-menu"style"menu"
class"*GtkMenu"style"menu"

style"menuitem"{
xthickness=10
ythickness=10
engine"pixmap"{
image{
function=BOX
file="images/colorspecific/menu-menuitem.svg"
border={8,8,8,8}
stretch=TRUE}
image{
function=ARROW
state=INSENSITIVE
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-left_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=INSENSITIVE
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-right_insensitive.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=NORMAL
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=NORMAL
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-right_normal.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=ACTIVE
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=ACTIVE
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/menu-arrow-right_prelight.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}
image{
function=ARROW
state=PRELIGHT
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/colorspecific/menu-arrow-left_normal.svg"
overlay_stretch=FALSE
arrow_direction=LEFT}
image{
function=ARROW
state=PRELIGHT
file="images/arrow-bg.svg"
stretch=FALSE
overlay_file="images/menu-arrow-right_prelight.svg"
overlay_stretch=FALSE
arrow_direction=RIGHT}}}
widget"*GtkWindow.gtk-combobox-popup-menu*GtkMenuItem"style"menuitem"
widget_class"*GtkMenu.GtkMenuItem"style"menuitem"
widget"GtkWindow*GtkMenu.*MenuItem*"style"menuitem"
widget"GtkWindow.GtkMenu*MenuItem"style"menuitem"
widget_class"GtkWindow*GtkMenu.*GtkImageMenuItem"style"menuitem"
widget_class"GtkWindow*GtkMenu.*GtkCheckMenuItem"style"menuitem"


style"menuitemarrow"{
xthickness=10
ythickness=0}
widget_class"GtkWindow*GtkMenu.GtkArrow"style"menuitemarrow"

style"menuitemlabel"{
fg[PRELIGHT]=@selected_fg_color
text[PRELIGHT]=@selected_fg_color
engine"mist"{}}
widget_class"*.<GtkMenu>.<GtkMenuItem>.<GtkLabel>"style"menuitemlabel"
widget"*GtkWindow.gtk-combobox-popup-menu*GtkCellView*"style"menuitemlabel"
widget_class"*.<GtkMenu>.<GtkMenuItem>.*"style"menuitemlabel"

style"menuitemmisc"{
xthickness=1
ythickness=0
GtkWidget::wide-separators=1
engine"mist"{}}
widget"*GtkSeparatorMenuItem"style"menuitemmisc"
widget"*GtkMenu*GtkImage"style"menuitemmisc"

style"menucheckbutton"{
xthickness=1
ythickness=1
GtkCheckButton::indicator-size=16
GtkRadioButton::indicator-size=16
GtkCheckMenuItem::indicator-size=16
GtkRadioMenuItem::indicator-size=16
engine"pixmap"{
image{
function=CHECK
state=INSENSITIVE
shadow=OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=OUT
file="images/check-menu_prelight.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_IN
file="images/check-menu_prelight.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/check-menu_semi_prelight.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=ETCHED_OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=ETCHED_OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=ETCHED_OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/check-menu_semi_prelight.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=ETCHED_OUT
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=INSENSITIVE
shadow=IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_checked.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=NORMAL
shadow=IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_checked.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=PRELIGHT
shadow=IN
file="images/check-menu_prelight.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/check-menu_checked_prelight.svg"
overlay_stretch=FALSE}
image{
function=CHECK
state=ACTIVE
shadow=IN
file="images/colorspecific/check-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/check-menu_checked.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=OUT
file="images/radio-menu_prelight.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={7,7,7,7}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_IN
file="images/radio-menu_prelight.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radio-menu_semi_prelight.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=ETCHED_OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=ETCHED_OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=ETCHED_OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radio-menu_semi_prelight.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=ETCHED_OUT
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_semi.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=INSENSITIVE
shadow=IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_checked.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=NORMAL
shadow=IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_checked.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=PRELIGHT
shadow=IN
file="images/radio-menu_prelight.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/radio-menu_checked_prelight.svg"
overlay_stretch=FALSE}
image{
function=OPTION
state=ACTIVE
shadow=IN
file="images/colorspecific/radio-menu.svg"
stretch=TRUE
border={1,1,1,1}
overlay_file="images/colorspecific/radio-menu_checked.svg"
overlay_stretch=FALSE}}}
class"GtkCheckMenuItem*"style"menucheckbutton"
