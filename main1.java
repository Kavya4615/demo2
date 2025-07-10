public class main1{
    public static void main(String[] args) {
        System.out.println("hello");
        circle q = new circle();
        System.out.println(q.getarea(5));
    
    }
}
class circle{
    int area;
    public double getarea(int radius){
        return 3.14*radius*radius;
    }

}