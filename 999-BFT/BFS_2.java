//In this code we studied about disconnected graphs

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class BFS_2 {

    static class Edge{
        int src;
        int dest;

        Edge(int src,int dest){
            this.src = src;
            this.dest = dest;
        }
    }

      public static void create_graph(ArrayList<Edge> graph[],int vertex){
        //now the array will contain the arraylist but with null values so we will get error to remove we do initialize to empty arraylist

        for(int i=0;i<graph.length;i++){
            graph[i] = new ArrayList<Edge>();
        }

        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[1].add(new Edge(1, 0));
        graph[1].add(new Edge(1, 3));

        graph[2].add(new Edge(2, 0));
        graph[2].add(new Edge(2, 4));

        graph[3].add(new Edge(3, 1));
        graph[3].add(new Edge(3, 4));
        graph[3].add(new Edge(3, 5));

        graph[4].add(new Edge(4, 2));
        graph[4].add(new Edge(4, 3));
        graph[4].add(new Edge(4, 5));

        graph[5].add(new Edge(5, 3));
        graph[5].add(new Edge(5, 4));
        graph[5].add(new Edge(5, 6));

        graph[6].add(new Edge(6, 5));
    }

    public static void Bfs(ArrayList<Edge> graph[],int V,boolean visited[],int start){
        Queue<Integer> q = new LinkedList<>();

        q.add(start);

        while(!q.isEmpty()){
            int cur = q.remove();
            if(visited[cur] == false){
                System.out.print(cur+" ");
                visited[cur] = true;

                for(int i = 0;i<graph[cur].size();i++){
                    Edge e = graph[cur].get(i);
                    q.add(e.dest);
                }
            }
        }
    }
    public static void main(String[] args) {
        int V= 7;
        ArrayList<Edge> graph[] = new ArrayList[V];

        create_graph(graph,V);

        boolean visited[] = new boolean[V];
        for(int i = 0;i<V;i++){
            if(visited[i] == false){
                Bfs(graph, V,visited,i);
            }
        }

    }
}
