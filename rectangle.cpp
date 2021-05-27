#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle()
{
    //ctor

}

Rectangle::~Rectangle()
{
    //dtor
}
double Rectangle::saisirDimension()
{
    double d;
    cout<<"saisir une dimension:";
    cin>>d;
    return d;
}
double Rectangle::saisirLongueur(double g)
{
    do
    {
         cout<<"\nSaisir longueur>"<<g<<":";
         cin>>Longueur;
    }while(Longueur==g);
    return Longueur;
}
double Rectangle::saisirLargeur(double v)
{
     do
    {
         cout<<"Saisir largeur<"<<v<<":";
         cin>>Largeur;
    }while(Largeur>=v);
    return Largeur;
}
Rectangle Rectangle::creerRectangle(Rectangle r)
{

    r.Longueur=saisirLongueur(0);
    r.Largeur=saisirLargeur(r.Longueur);
    return r;
}
double Rectangle::perimetre(Rectangle r)
{
    double a,b,p;
    a=r.GetLongueur();
    b=r.GetLargeur();
    p=(a+b)*2;
    return p;
}
double Rectangle::Surface(Rectangle r)
{
    double s,a,b;
    a=r.GetLongueur();
    b=r.GetLargeur();
    s=a*b;
    return s;
}
void Rectangle::afficherRectangle(Rectangle r)
{
    cout<<"\n Longueur="<<r.Longueur;
    cout<<"\n Largeur="<<r.Largeur;
}
Rectangle Rectangle::creerRectangle2(double x,double y)
{
    Rectangle r;
    r.Longueur=x;
    r.Largeur=y;
    return r;
}
int Rectangle::SaisirTaille()
{
    int t;
    do
    {
        cout<<"Saisir taille>1:";
        cin>>t;
    }while(t<=1);
    cout<<"\n";
    return t;
}
Rectangle Rectangle::creerNbRectangle(Rectangle t[],int n)
{
    int i;Rectangle r;
    for(i=0;i<n;++i)
    {
        cout<<"\ncreer rectangle numero"<< i+1 <<endl;
        cout<<"\n ________________________";
        t[i]=creerRectangle(r);
    }
}
void Rectangle::afficherNbRectangle(Rectangle t[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        cout<<"\nLe rectangle numero"<<i+1<<" est:"<<endl;
         cout<<"\n________________________";
        afficherRectangle(t[i]);
    }
}
void Rectangle::afficherNbPerimetre(Rectangle t[],int n)
{
    double r;
    int i;
    for(i=0;i<n;++i)
    {
        r=perimetre(t[i]);
         cout<<"\nLe perimetre numero"<<" "<<i+1<<" est:"<<r<<endl;
         cout<<"\n________________________";
    }
}
void Rectangle::afficherNbSurface(Rectangle t[],int n)
{
    double r;
    int i;
    for(i=0;i<n;++i)
    {
        r=Surface(t[i]);
        cout<<"\nLa surface numero"<<" "<<i+1<<" est: "<<r<<endl;
         cout<<"\n________________________";
    }
}
double Rectangle::Petitesurface(Rectangle t[],int n)
{
    int i;
    double mina=Surface(t[0]);
    for(i=1;i<n;++i)
    {
        if(Surface(t[i])>mina)
            mina=Surface(t[i]);
    }
    return mina;
}
double Rectangle::GrandPerimetre(Rectangle t[],int n)
{
    int i;
    double maxi=perimetre(t[0]);
    for(i=1;i<n;++i)
    {
        if(perimetre(t[i])<maxi)

        {
            maxi=perimetre(t[i]);
        }
    }
    return maxi;
}
/*void affichePetiteSurface(Rectangle t[],int n, double v)
{
  int i;
  for ( i = 0; i < n; ++i)
  {
    if(Surface(t[i])==v)
      AfficherRectangle(t[i]);
  }
}
void AfficherGrandPerimetre(rect t[],int n, double v)
{
  int i;
  for (i = 0; i < n; ++i)
  {
    if(perimetre(t[i])==v)
      AfficherRectangle(t[i]);
  }
}
double SurfaceTotale(Rectangle t[],int n)
{
    int i;
    int s=0;
    for(i=0;i<n;++i)
    {
        s=s+Surface(t[i]);
    }
    return s;
}*/
