INF = 10000000
graph = [
    [0, 2, 3, 0, 0],
    [2, 0, 15, 2, 0],
    [3, 15, 0, 0, 13],
    [0, 2, 0, 0, 9],
    [0, 0, 13, 9, 0]
]

v = 5
selected_edge_count = 0
selected = [0, 0, 0, 0, 0]
selected[0] = True

while(selected_edge_count < v - 1):

    mn = INF
    temp_from = -1
    temp_to = -1

    for i in range (v):
        if(selected[i]):
            for j in range(v):
                if graph[i][j] and (not selected[j]) and (graph[i][j] < mn):
                    mn = graph[i][j]
                    temp_from = i
                    temp_to = j

    selected[temp_to] = True
    selected_edge_count += 1
    print(str(temp_from) + " - " + str(temp_to) + " : " + str(mn))


