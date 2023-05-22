import java.util.Scanner; 
public class Program{  

    public static void main(String[] args){

        int p=4 , q=4 ; 
        // System.out.println("Enter The Dimensions of Graph : ");
        // Scanner sc = new Scanner(System.in);
        // p = sc.nextInt() ; 
        // q = sc.nextInt(); 
        // int SolutionPath1[][] = new int[p][q]; 
        
        // System.out.println("Enter the Path of Graph : "); 
        // for(int i=0; i<p;i++){
        //     for(int j=0; j<q; j++){
        //         SolutionPath1[i][j] = sc.nextInt();  
        //     }
        // }

         int path[][] = {{999,2,4,1},{2,999,3,3},{4,3,999,2},{1,3,2,999}}; 
         int SolutionPath[][] = new int[4][4];  

        for(int i=0; i<4;i++){
            for(int j=0; j<4; j++){
                SolutionPath[i][j]=0; 
            }
        }
        System.out.println("Given Graph: ");
        for(int i=0; i<4;i++){
            for(int j=0; j<4; j++){
                System.out.print(path[i][j]+" "); 
            }
            System.out.println(""); 
        }

            System.out.println("\n"); 
            Explore(path, 2, 1); 
        
    }
        public static void Explore(int arr[][], int a , int b){
            int cost[][] = new int [4][4];
     
            for(int i=0; i<4;i++){
                for(int j=0; j<4; j++){
                    cost[i][j]=0; 
                }
            } 
            for(int i=0; i<4;i++){
                for(int j=0; j<4; j++){
                    if(arr[i][j] < arr[a][b]){
                        cost[a][b] = arr[i][j]+ cost[i][j];    
                    } 
                }
            }

            System.out.println("Solution : "); 
            for(int i=0; i<4;i++){
                for(int j=0; j<4; j++){
                    System.out.print(cost[i][j]+" "); 
                }
                System.out.println(""); 
            }
        }
    

}



// not working properly 
