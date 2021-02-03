/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex_diapo;

/**
 *
 * @author cmaillard
 */
public class Guitare extends InstrumentACorde {

    //attributs
    String modele;

    //constructeurs
    public Guitare() {
        System.out.println("constructeur defaut Guitare");
    }

    public Guitare(String modele) {
        this.modele = modele;
    }

    public Guitare(String modele, int nombreDeCorde, String nom) {
        super(nombreDeCorde, nom);
        this.modele = modele;
    }

    public Guitare(Guitare gu) {
        super(gu);
        this.modele = gu.modele;
    }

    //methodes
    public void afficherGuitare() {
        System.out.println("Modele :" + modele);
    }
}
