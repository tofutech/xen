style"statusbar"{
xthickness=2
ythickness=4
GtkStatusbar::shadow-type=GTK_SHADOW_NONE}
class"GtkStatusbar"style"statusbar"

style"statusbarframe"{
engine"pixmap"{
image{
function=SHADOW
shadow=OUT
file="images/none.svg"
stretch=TRUE}
image{
function=SHADOW
shadow=IN
file="images/none.svg"
stretch=TRUE}}}
widget_class"*GtkStatusbar.GtkFrame"style"statusbarframe"

style"statusbargrip"{
engine"pixmap"{
image{
function=RESIZE_GRIP
file="images/none.svg"
stretch=TRUE}}}
widget_class"*GtkStatusbar"style"statusbargrip"
