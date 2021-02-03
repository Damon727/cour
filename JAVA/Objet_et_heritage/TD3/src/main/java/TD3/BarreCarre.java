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
public class BarreCarre extends Barre {

    //attributs
    private float cote;

    //constructeurs 
    public BarreCarre() {
        System.out.println("constructeur par defaut");
    }

    public BarreCarre(float cote) {
        this.cote = cote;
    }

    public BarreCarre(BarreCarre bc) {
        super(bc);
        this.cote = bc.cote;
        System.out.println("constructeur par copie");

    }

    //methodes
    public float calculerMasse() {
        float masse;
        masse = longueur * densite * cote * cote;
        System.out.println("Masse:"+masse);
        return masse;
    }
    
}
