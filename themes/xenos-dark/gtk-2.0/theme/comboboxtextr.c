style"comboboxtext"{
base[INSENSITIVE]=shade(0.98,@base_color)
GtkEntry::icon-prelight=0
GtkEntry::inner-border={1,1,3,3}
GtkWidget::wide-separators=0
GtkWidget::separator-height=0
GtkWidget::separator-width=0
GtkComboBox::arrow-scaling=1
engine"pixmap"{
image{
function=SHADOW
shadow=IN
detail="entry"
file="images/combo-entry.svg"
border={3,3,3,3}
stretch=TRUE}
image{
function=BOX
shadow=OUT
detail="button"
overlay_file="images/combo-button.svg"
overlay_border={2,5,5,5}
overlay_stretch=TRUE}
image{
function=BOX
shadow=IN
detail="button"
overlay_file="images/combo-button_pressed.svg"
overlay_border={2,5,5,5}
overlay_stretch=TRUE}
image{
recolorable = TRUE
detail = "buttondefault"
file="images/colorspecific/button-default.svg"
border={5,5,5,5}
stretch=TRUE}
image{
function=FOCUS
file="images/none.svg"
stretch=FALSE}
image{
function=VLINE
file="images/none.svg"
stretch=FALSE}}}
widget_class"*<GtkComboBoxText>.<GtkToggleButton>"style"comboboxtext"
widget_class"*<GtkComboBoxText>.<GtkEntry>"style"comboboxtext"

