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
public class TestCompteBancaire {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        CompteBancaire cb1;
        CompteBancaire cb2;
        CompteBancaire cb3;

        cb1 = new CompteBancaire();
        cb2 = new CompteBancaire(100, 50);
        cb3 = new CompteBancaire(cb2);

        System.out.println("compte 1");
        cb1.afficher();
        System.out.println("compte 2");
        cb2.afficher();
        System.out.println("compte 3");
        cb3.afficher();

        cb1.depose(50);
        System.out.println("compte 1");
        cb1.afficher();

        cb2.retire(75);
        System.out.println("compte 2");
        cb2.afficher();
        
        cb1.changerDecouvert(150);
        System.out.println("compte 1");
        cb1.afficher();
        
        cb2.depose(-1500);
        System.out.println("compte 2");
        cb2.afficher();
        
        cb2.depose(-3000);
        System.out.println("compte 2");
        cb2.afficher();
    }

}
