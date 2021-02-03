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
public class CompteEpargne extends CompteBancaire {
//attributs
    private double tauxInteret;
//constructeur

    public CompteEpargne() {
    }

    public CompteEpargne(double tauxInteret, float solde, float decouvert) {
        super(solde, decouvert);
        this.tauxInteret = tauxInteret;
    }
    
    public CompteEpargne(CompteEpargne ce) {
        super(ce);
        this.tauxInteret = ce.tauxInteret;
    }



//methodes
    public double calculerInteret() {
        double interet;
    // solde : 100
    //taux : 5%
    //interet : 5
    interet=this.solde*this.tauxInteret/100.0;
        return interet;
    }

    public void crediterInteret() {
        solde += this.calculerInteret();
    }

    public void changerTaux(double nouveauTaux) {
        if (nouveauTaux > 0) {
            tauxInteret = nouveauTaux;
        }
    }
}
