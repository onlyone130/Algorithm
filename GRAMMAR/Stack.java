import Interface_form.StackInterface;

public class Stack<E> implements StackInterface<E> {
    private static final int DEFAULT_CAPACITY = 10;
    private static final Object EMPTY_ARRAY = {};

    private Object[] array;
    private int size;

    public Stack() {
        this.array = EMPTY_ARRAY;
        this.size = 0;
    }

    public Stack(int capacity) {
        this.array = new Object[capacity];
        this.size = 0;
    }
}
