import java.util.Arrays;
import java.util.Stack;

public class UpdatedDataStructures {
    public static void main(String[] args) {
        // Массив
        int[] values = {5, 15, 25, 35, 45};
        System.out.println("Массив чисел: " + Arrays.toString(values));
        
        // Стек
        Stack<Character> stack = new Stack<>();
        stack.push('A');
        stack.push('B');
        stack.push('C');
        System.out.println("Стек символов: " + stack);
        
        // Извлечение из стека
        char topElement = stack.pop();
        System.out.println("Извлечённый элемент: " + topElement);
        System.out.println("Оставшиеся элементы в стеке: " + stack);
    }
}
