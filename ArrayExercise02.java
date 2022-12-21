//求出一个数组int[ ]的最大值，并得到对应的下标。
public class ArrayExercise02
{
    public static void main(String[] args)
    {
        int[] arr={4,-1,9,10,23};
        int max = arr[0]; //假定第一个元素是最大值
        int maxIndex=0;
        for(int i=1;i<arr.length;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
                maxIndex=i;
            }
        }
        System.out.println("max="+max+" maxIndex="+maxIndex);
        System.out.println(arr.length);
    }
}
