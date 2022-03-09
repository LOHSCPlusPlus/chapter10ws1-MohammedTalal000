class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        // double getX();
        // double getY();
        // Accersors and Mutators
        // void setX(double xVal);
        // void setY(double yVal);
        void print();
        double calDistance(Point other);
    private:
        double x;
        double y;
};
