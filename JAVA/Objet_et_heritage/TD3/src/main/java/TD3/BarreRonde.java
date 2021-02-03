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
public class BarreRonde extends Barre {

    //attributs
    private float diametre;
    private float aire;

    //constructeurs
    public BarreRonde() {
        System.out.println("constructeur par defaut");
    }

    public BarreRonde(float diametre, float aire, String reference, float longueur, float densite) {
        super(reference, longueur, densite);
        this.diametre = diametre;
        this.aire = aire;
        System.out.println("constructeur a parametre");
    }

    public BarreRonde(BarreRonde br) {
        super(br);
        this.diametre = br.diametre;
        this.aire = br.aire;
        System.out.println("constructeur par copie");
    }

    //methodes
    public double calculerAire() {
        return (Math.PI * diametre * diametre / 4);

    }

    public float calculerMasse() {
        float masse;
        masse = longueur * densite * aire;
        System.out.println("Masse:" + masse);
        return masse;
    }

}
