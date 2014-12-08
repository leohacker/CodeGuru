public class EqualsTemplate {
    public boolean equals(Object otherObject) {
        // if the otherObject reference to same object.
        if (this == otherObject) return true;

        // return false if otherObject is null.
        if (otherObject == null) return false;

        // compare the object strictly in the same class.
        if (getClass() != otherObject.getClass()) {
            return false;
        }

        // compare the objects in same base class. e.g. the elems in set.
        // T is the base class.
        if (!(otherObject instanceof (T))) {
            return false;
        }

        // convert the this object and other object into same type.
        T other = (T)otherObject;

        // compare every fields.
        return compare();
    }
}
