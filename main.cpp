#include <iostream>
#include "Rectangle.cpp"
using namespace std;

int main()
{
   Rectangle L,l,d,p,r,c,rec,t,v,aff,aff1,aff2,surf,nbsurf,nbperi,peti,grd;
   double longe,large,dim,peri,s,petitsurf,grandperi;
   int taille;
   dim=d.saisirDimension();
   longe=L.saisirLongueur(0);
   large=l.saisirLargeur(longe);
   r=c.creerRectangle2(longe,large);
   aff.afficherRectangle(r);
   peri=p.perimetre(r);
   s=surf.Surface(r);
   cout<<"\n La dimension est:"<<dim;
    cout<<"\n Le perimetre est:"<<peri<<endl;
    cout<<"\n Le surface est:"<<s<<endl;
  taille=t.SaisirTaille();
  Rectangle tab[taille];
  v.creerNbRectangle(tab,taille);
  aff2.afficherNbRectangle(tab,taille);
  nbperi.afficherNbPerimetre(tab,taille);
  nbsurf.afficherNbSurface(tab,taille);
  petitsurf=peti.Petitesurface(tab,taille);
 // grandperi=grd.GrandePerimetre(tab,taille);
  cout<<"\n La petite surface est "<<petitsurf;
 // cout<<"\n Le grand perimetre est"<<grandperi;
    return 0;
}
