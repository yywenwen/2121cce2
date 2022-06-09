void setup(){
  size(450, 450);
}
int []bx = new int[100];
int []by = new int[100];
int N = 0;
void draw()
{
  background(#F5D665);
  for(int y=50, x=50; y<450; y+=50, x+=50)
  {
    line(0, y, 450, y);
    line(x, 0, x, 450);
  }
  for(int i=0; i<N; i++){
    if(i%2==0)fill(0);
    else fill(255);
    ellipse(bx[i], by[i], 40, 40);
  }
  if(N%2==0)fill(0);
  else fill(255);
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed()
{
  bx[N] = mouseX; by[N] = mouseY; 
  N++;
}
