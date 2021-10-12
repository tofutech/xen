style"button"{
GtkButton::default-outside-border={0,0,0,0}
GtkButton::default-border={0,0,0,0}
GtkButton::inner-border={4,4,4,4}
GtkButton::image-spacing=5
GtkWidget::interior_focus=1
GtkWidget::wide-separators=1
engine"pixmap"{
image{
function=BOX
shadow=OUT
detail="button"
overlay_file="images/button-normal.svg"
overlay_border={5,5,5,5}
overlay_stretch=TRUE}
image{
function=BOX
shadow=IN
detail="button"
overlay_file="images/button-pressed.svg"
overlay_border={2,2,2,2}
overlay_stretch=TRUE}
image{
function = BOX
recolorable = TRUE
detail = "buttondefault"
file="images/colorspecific/button-default.svg"
border={5,5,5,5}
stretch=TRUE}
image{
function=FOCUS
file="images/none.svg"
stretch=FALSE}}}
class "*GtkButton"style"button"
