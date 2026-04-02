// Node structure
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

function height(root) {
    if (root === null) {
        return -1;
    }

    // compute the height of left and right subtrees
    let lHeight = height(root.left);
    let rHeight = height(root.right);

    return Math.max(lHeight, rHeight) + 1;
}

// Driver Code

// Representation of the input tree:
//     12
//    /  \
//   8   18
//  / \
// 5   11
let root = new Node(12);
root.left = new Node(8);
root.right = new Node(18);
root.left.left = new Node(5);
root.left.right = new Node(11);

console.log(height(root));