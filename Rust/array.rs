fn main(){ 
    /*
    let arr: [i32; 5] = [1,2,3,4,5];

    assert!(arr.len() == 5);
    println!("Success");
    */
 
    let arr0 = [1, 2, 3];
    let arr1: [_; 3] = ['a', 'b', 'c']; //automatically infers char

    println!("Size of arrays are {} and {}", std::mem::size_of_val(&arr0), std::mem::size_of_val(&arr1)); // 12 and 12 each

    let arr2: [i32; 100] = [1; 100]; // [1,1,1,1,1,...,1];

    assert!(arr2[0] == 1);
    assert!(arr2.len() == 100);

    // All elements in an array must be of the same type;
}
