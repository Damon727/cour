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
public class TestVoitures {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Voiture maVoiture;
        maVoiture= new Voiture("rouge",3000);
        maVoiture.rouler(15);
        maVoiture.afficher();
        
        Voiture twingo;
        twingo= new Voiture();
        twingo.rouler(15);
        twingo.afficher();
    }
    
}
