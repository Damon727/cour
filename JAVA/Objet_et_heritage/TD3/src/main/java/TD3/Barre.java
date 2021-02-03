/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TD3;

/**
 *
 * @author cmaillard
 */
public class Barre {
    //attributs
    protected String reference;
    protected float longueur;
    protected float densite;

    
    
    //constructeurs
    public Barre() {
        System.out.println("constructeur par defaut");
    }
    

    public Barre(String reference, float longueur, float densite) {
        this.reference = reference;
        this.longueur = longueur;
        this.densite = densite;
        System.out.println("constructeur a parametre");
    }
    
    public Barre(Barre b) {
        this.reference = b.reference;
        this.longueur = b.longueur;
        this.densite = b.densite;
        System.out.println("constructeur par copie");
    }
    
    //methodes
    public void afficherReference(){
        System.out.println("Reference :"+reference);
    }
}
