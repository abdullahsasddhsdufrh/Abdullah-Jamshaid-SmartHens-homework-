using namespace std;
#include<iostream>
string checkpoint(int height,int x,int y);
int main(){
int height,x,y;
cout<<"Enter hight: ";
cin>>height;
cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinate: ";
cin>>y;


checkpoint(height,x,y);

return 0;
}


string checkpoint(int height,int x,int y){








if (
((x>0&&x<3*height)&&(y>0&&y<height))
||
((x>height && x<2*height)&&(y>height&&y<4*height))
)
{
{
    cout<<"Inside.";
    
}


}




else if (
    (x==0&&y==0 )||(x==0 &&y==height )||(x==height &&y==height )||(x==height &&y==4*height )||(x==2*height &&y==4*height )||(x== 2*height&&y==height )||
    (x==3*height &&y==height )||(x==3*height &&y==0 )



)
{
   cout<<"BORDER.";
   
}
//FOR THE BORDER when we consider every points not the 8 points which are corner.....
// else if ((x==0&&y==0)||(x==0&&y==height)||(x==height&&y==height)||(x==height&&y>=4*height )||((x>height&&x<=2*height) &&y==4*height)||
// (x==2*height &&(y>=2*height&&y<4*height))||((x>=2*height&&x<3*height) &&y==height )||(x==3*height &&y==height )||((x>=0&&x<=3*height) &&y==0)
// )
// {
//    cout<<"BORDER.";
//    
   
// }

else {
    cout<<"Outside.";
    
}


}