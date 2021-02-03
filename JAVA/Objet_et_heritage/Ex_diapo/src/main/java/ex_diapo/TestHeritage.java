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
public class TestHeritage {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Guitare maGuitare;
        maGuitare = new Guitare();
        
        Guitare g2;
        g2 = new Guitare();
        
        InstrumentACorde ic1;
       ic1= new InstrumentACorde();
        
        maGuitare.afficherGuitare();
        ic1.afficherCorde();
    }
    
}
