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
public class BarreRectangle extends Barre{
     //attributs
    private float cote;
    private float aire;
        
    //constructeurs 

    public BarreRectangle() {
        System.out.println("constructeur par defaut");
    }

    public BarreRectangle(float cote, String reference, float longueur, float densite) {
        super(reference, longueur, densite);
        this.cote = cote;
        System.out.println("constructeur a parametre");
    }

    public BarreRectangle(BarreRectangle br) {
        super(br);
        this.cote = br.cote;
        System.out.println("constructeur par copie");
    }
    
    
    
    
    
    
    //methodes
    public float calculerAire() {
        

        aire = longueur * cote;

        return aire;
    }
    public float calculerMasse(){
        float masse;
        masse= longueur*densite*calculerAire() ;
        System.out.println("Masse:"+masse);
        return masse;
    }
}
