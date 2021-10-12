style "inkscape"{
engine"mist"{}}
widget_class "*SPDesktopWidget" style "inkscape"
widget_class "*SPCanvas*" style "inkscape"

style"inkscape2"{
xthickness=4
ythickness=4}
widget_class "*SPDesktopWidget*GtkRadioButton*" style "inkscape2"
widget "*gdl-button*" style "inkscape2"

style"inkscapespinbutton"{
xthickness=5
ythickness=6}
widget_class "*SPDesktopWidget*gtkmm__GtkSpinButton*" style "inkscapespinbutton"

style"inkscapecombo"{
xthickness=5
ythickness=6}
widget_class "*SPDesktopWidget*GtkComboBox*" style "inkscapecombo"

style"inkscapedockitemgrip"{
xthickness=10
ythickness=4
engine"pixmap"{
image{
function=SHADOW
file="images/none.svg"
stretch=TRUE}}}
widget_class "*SPDesktopWidget*GdlDockItemGrip*" style "inkscapedockitemgrip"

widget"*InkscapePanel*GtkVScrollbar"style"scrollbar"
widget"*InkscapePanel*GtkHScrollbar"style"scrollbar"

style"inkscapedock"{
xthickness=2
ythickness=2
engine"pixmap"{
image{
function=SHADOW
file="images/none.svg"
stretch=TRUE}}}
widget_class "*SPDesktopWidget*gtkmm__GtkScrolledWindow.GtkViewport" style "inkscapedock"
widget_class "*SPDesktopWidget*GtkToolbar" style "inkscapedock"
