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
public class InstrumentDeMusique {

    //attributs
    protected String nom;

    //constructeurs
    public InstrumentDeMusique() {
        System.out.println("constructeur defaut InstrumentDeMusique");
    }

    public InstrumentDeMusique(String nom) {
        this.nom = nom;
    }

    public InstrumentDeMusique(InstrumentDeMusique im) {
        this.nom = im.nom;

    }

    //methodes
    public void afficher() {
        System.out.println("Nom :" + nom);
    }

}
