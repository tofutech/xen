style"linkbutton"{
GtkButton::inner-border={3,3,3,3}
xthickness=1
ythickness=1
font_name="bold"
engine"pixmap"{
image{
function=BOX
shadow=OUT
state=NORMAL
detail="button"
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=BOX
shadow=OUT
state=PRELIGHT
detail="button"
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=BOX
shadow=IN
detail="button"
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function = BOX
recolorable = TRUE
detail = "buttondefault"
overlay_file="images/none.svg"
overlay_stretch=FALSE}
image{
function=FOCUS
file="images/none.svg"
stretch=FALSE}}}
class"*GtkLinkButton"style"linkbutton"


style"linkbuttonlabel"{
font_name="bold"}
widget_class"*<GtkLinkButton>.<GtkLabel>"style"linkbuttonlabel"

