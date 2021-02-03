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
public class Point {

    //attributs
    private double x;
    private double y;

    //constructeur
    public Point() {//constructeur par default

    }

    public Point(double x, double y) {//constructeur a parametre
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {//constructeur par copie
        this.x = p.x;
        this.y = p.y;
    }

    public void translater(double dx, double dy) {
        this.x += dx;
        this.y += dy;
    }

    public void afficher() {
        System.out.println("(" + this.x + "X" + this.y + ")");
    }

    //calculer distance par rapport a l'origine
    public double calculerDistance() {
        return Math.sqrt(this.x * this.x + this.y * this.y);
    }

    public double calculerDistancePoint(Point p) {
        double dx = this.x - p.x;
        double dy = this.y - p.y;
        return Math.sqrt(dx * dx + dy * dy);
    }
    public double getX(){
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }
    
}
