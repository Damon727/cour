/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package td1;

/**
 *
 * @author cmaillard
 */
public class Carre {

    //attributs
    private int longueurDucote;

    //constructeur
    public Carre(int longueurDucote) {
        this.longueurDucote = longueurDucote;
    }

    public Carre() {
    }

    public int calculerPerimetre() {
        int perimetre;

        perimetre = longueurDucote * 4;

        return perimetre;
    }

    public int calculerAire() {
        int aire;

        aire = longueurDucote * longueurDucote;

        return aire;
    }

    public void afficherPerimetre() {
        System.out.println("Perimetre du carre : " +this.calculerPerimetre());
    }
    public void afficherAire() {
        System.out.println("Aire : " +this.calculerAire());
    }
}
