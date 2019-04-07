public class Pol�rGener�tor {

    boolean nincsT�rolt = true;
    double t�rolt;

    public Pol�rGener�tor() {

        nincsT�rolt = true;

    }

    public double k�vetkez�() {

        if(nincsT�rolt) {

            double u1, u2, v1, v2, w;
            do {
                u1 = Math.random();
                u2 = Math.random();

                v1 = 2*u1 - 1;
                v2 = 2*u2 - 1;

                w = v1*v1 + v2*v2;

            } while(w > 1);

            double r = Math.sqrt((-2*Math.log(w))/w);

            t�rolt = r*v2;
            nincsT�rolt = !nincsT�rolt;

            return r*v1;

        } else {
            nincsT�rolt = !nincsT�rolt;
            return t�rolt;
        }
    }

    public static void main(String[] args) {

        Pol�rGener�tor g = new Pol�rGener�tor();

        for(int i=0; i<10; ++i)
            System.out.println(g.k�vetkez�());

    }

}




