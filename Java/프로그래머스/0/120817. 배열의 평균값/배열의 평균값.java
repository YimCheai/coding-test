class Solution {
    public double solution(int[] numbers) {
        double everything = 0;
        
        for(int i = 0; i < numbers.length; i++){
            everything += numbers[i];
        }
        
        double answer = everything/numbers.length;
        return answer;
    }
}