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
public class Cercle {
    private double diametre;

    public Cercle() {
        diametre= 0.0;
        
    }

    public Cercle(double diametre) {
        this.diametre = diametre;
    }
    
    public double calculerAire(){
        return (Math.PI * diametre * diametre /4);
        
        
    }
    public double calculerPerimetre(){
        return (Math.PI*diametre);
    }
    
}
