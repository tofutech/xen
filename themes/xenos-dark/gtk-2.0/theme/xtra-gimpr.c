widget_class"*GimpDockable*GimpHighlightableButton"style"toolbarbutton"

style "gimpdockbutton"{
xthickness=0
ythickness=2
GtkButton::inner-border={1,1,1,1}
GtkButton::image-spacing=0}
widget_class "*GimpDockable*GimpHighlightableButton" style "gimpdockbutton"

style "gimpbasecolor"{
bg[NORMAL]=@base_color}
class "*GimpRuler" style "gimpbasecolor"

widget "*GimpThumbBox*GtkButton" style "treeviewheader"
widget "*GimpToolOptionsEditor*GtkScrolledWindow*GtkVScrollbar"style"scrollbar"


style "gimpspinscale"{
ythickness=0
engine"industrial"{}}
widget "*GimpSpinScale" style "gimpspinscale"
