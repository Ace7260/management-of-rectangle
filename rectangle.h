#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle();
        double saisirDimension();
        double saisirLongueur(double a);
        double saisirLargeur(double v);
        Rectangle creerRectangle(Rectangle r);
        double perimetre(Rectangle r);
        double Surface(Rectangle r);
        void afficherRectangle(Rectangle r);
        Rectangle creerRectangle2(double ,double );
        int SaisirTaille();
        Rectangle creerNbRectangle(Rectangle t[],int n);
        void afficherNbRectangle(Rectangle t[],int n);
        void afficherNbPerimetre(Rectangle t[],int n);
        void afficherNbSurface(Rectangle t[],int n);
        double Petitesurface(Rectangle t[],int n);
        double GrandPerimetre(Rectangle t[],int n);
        void afficherGrandPerimetre(Rectangle t[],int n);
        void affichePetiteSurface(Rectangle t[],int n);
        double SurfaceTotale(Rectangle t[],int n);
        virtual ~Rectangle();

        float GetLongueur() { return Longueur; }
        void SetLongueur(float val) { Longueur = val; }
        float GetLargeur() { return Largeur; }
        void SetLargeur(float val) { Largeur = val; }

    protected:

    private:
        float Longueur;
        float Largeur;
};

#endif // RECTANGLE_H
