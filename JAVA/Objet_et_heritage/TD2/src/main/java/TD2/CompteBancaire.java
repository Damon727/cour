/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TD2;

/**
 *
 * @author cmaillard
 */
public class CompteBancaire {

    //attributs
    protected float solde;
    private float decouvert;

    //constructeurspar defaut
    public CompteBancaire() {
    }
    
    //constructeur a parametre 

    public CompteBancaire(float solde, float decouvert) {
        this.solde = solde;
        this.decouvert = decouvert;
    }
    //constructeur par copie

    public CompteBancaire(CompteBancaire cb) {
        this.solde = cb.solde;
        this.decouvert = cb.decouvert;
    }

    //methodes
    public void depose(float depot) {
        if(depot>0){
        solde = depot + solde;
        }
    }

    public void retire(float retrait) {
        if (retrait>0 && (solde-retrait)>-decouvert){
        solde = solde - retrait;
        }
    }

    public void afficher() {
        System.out.println("Decouvert autorisé :" + this.decouvert + "\nVotre solde :" + this.solde);
    }

    public void changerDecouvert(float chgDecouvert) {
        if(chgDecouvert>0){
        decouvert = chgDecouvert;
        
        }
    }

}
