void setup()
{
  size(300, 300);
  fill(#97C4FA);//#F5527D
  textSize(50);
  textAlign(CENTER, CENTER);
}
void draw()
{
  background(#D6F552);
  text("Dinner1", 150, 50);
  text("Dinner2", 150, 150);
  text("Dinner3", 150, 250);
  int choice = mouseX % 3;
  if(choice == 0) rect(0, 25, 50, 50);
  if(choice == 1) rect(0, 125, 50, 50);
  if(choice == 2) rect(0, 225, 50, 50);
  //text("Hello", mouseX, mouseY);
}
