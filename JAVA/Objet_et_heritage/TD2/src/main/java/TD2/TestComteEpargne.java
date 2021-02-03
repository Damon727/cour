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
public class TestComteEpargne {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        CompteEpargne ce;
        double interet;
        
        ce = new CompteEpargne();
        ce.depose(100);
        ce.changerTaux(4.5);
        interet=ce.calculerInteret();
        System.out.println("interet : "+interet);
        
    }
    
}
