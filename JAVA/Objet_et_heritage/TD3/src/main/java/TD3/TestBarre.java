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
public class TestBarre {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Barre b1;
        b1 = new Barre("ez", 10, 20);
        b1.afficherReference();
        
        BarreCarre bc1;
        bc1 = new BarreCarre(5);
        bc1.afficherReference();
        
        BarreRectangle br1;
        br1 = new BarreRectangle(5, "reference", 5, 10);
        br1.afficherReference();
        
        br1.calculerMasse();
        
        
        
        
        
    }
    
}
