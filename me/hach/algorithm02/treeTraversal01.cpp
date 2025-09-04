/**
 * 후위순회 수도코드
 * 후위순회(postorder traversal)는 자식들 노드를 방문하고 자신의 노드를 방문하는 것을 말합니다.
 */
// postorder(node) {
//     if (node.visited == false)
//         postorder(node -> left) // 재귀
//         postorder(node -> right) // 재귀
//         node.visited = true
// }

/**
 * 전위순회 수도코드
 * 전위순회(preorder traversal)는 먼저 자신의 노드를 방문하고 그 다음 노드들을 방문하는 것을 말하니다. (DFS를 생각하면 됩니다.)
 */

//  preorder(node) {
//     if (node.visited == false)
//         node.visited = true
//         preorder(node -> left)
//         preorder(node -> right)
//  }

/**
 * 중위순회 수도코드
 * 중위순회(inorder traversal)는 왼쪽 노드를 먼저 방문 그 다음의 자신의 노드를 방문하고 그 다음 오른쪽 노드를 방문하는 것을 말합니다.
 */

// inorder(node) {
//     if (node.visited == false)
//         inorder(node -> left)
//         node.visited = true
//         inorder(node -> right)
// }