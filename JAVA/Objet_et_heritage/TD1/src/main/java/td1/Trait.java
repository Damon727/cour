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
public class Trait {

    private Point debut;
    private Point fin;
    private int epaisseur;
    private String style;

//constructeur par defaut
    public Trait() {
        this.debut = new Point();
        this.fin = new Point();
        this.epaisseur=1;
        this.style = "continu";
    }

    public Trait(Point debut, Point fin) {
        this.debut = debut;
        this.fin = fin;
    }
    
    public double calculerLongueur(){
        return debut.calculerDistancePoint(fin);
    }

}
