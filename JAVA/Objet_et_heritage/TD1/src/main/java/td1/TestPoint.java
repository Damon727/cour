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
public class TestPoint {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Point p1;
        Point p2;
        Point p3;
        Point p4;

        p1 = new Point();
        p2 = new Point(5, 8);
        p3 = new Point(p2);
        p4 = p2;

        p1.afficher();
        p2.afficher();
        p3.afficher();

        p2.translater(-1, 2);

        p2.afficher();
        p3.afficher();

        System.out.println("Distance p2,0 :" + p2.calculerDistance());
        System.out.println("Distance p2,p3 :" + p2.calculerDistancePoint(p3));

        p4.setX(5);
        p4.setY(5);
        p2.afficher();
        p4.afficher();
        
        Trait t1;
        t1= new Trait(p1,p4);
        System.out.println("longueur t1 :"+t1.calculerLongueur());
        
        Cercle c1 = new Cercle(700);
        System.out.println("perimetre :"+ c1.calculerPerimetre());
    }

}
