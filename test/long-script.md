# D3.js API

<script>

d3.select('head')
    .append('link')
    .attr({
        'href': 'http://static.didialift.com/pinche/css/animate.min.css'
        , 'rel': 'stylesheet'
        , 'type': 'text/css'
    })
    ;

function random(min, max){
    return min + Math.random() * ( max - min );
}

function randomColor(rgb) {
    var hsl = [
        'hsl(' + 360 * Math.random()
        , 100 * Math.random() + '%'
        , 100 * Math.random() + '%)'
        ].join(',');
    return rgb ? hsl.toString() : hsl; 
}

function randomData(min, max, size) {
    var data = [];
    for ( var i=0; i<size; i++ ) {
        data.push(random(min, max));
    }
    return data;
}

(function(){


var $cont = d3.select('#test_1 .test-container')
    , $console = d3.select('#test_1 .test-console');

function show(content){
    $console.text(content || $cont.html()); 
}

function append_show(content){
    $console.text(
        $console.text() 
        + ( content || $cont.html() )
    ); 
}

d3.select('#test_1_btn_1').on('click', function(){
    $cont.select('span').attr('className', 'abc');
    show();
});
    
d3.select('#test_1_btn_2').on('click', function(){
    $cont.select('span').property('className', 'abc');
    show();
});

d3.select('#test_1_btn_3').on('click', function(){
    $cont.select('span').style('color', 'blue');
    show();
});

d3.select('#test_1_btn_4').on('click', function(){
    $cont.select('span').classed('def', 1);
    show();
});

d3.select('#test_1_btn_5').on('click', function(){
    $cont.select('span').classed('def', 0);
    show();
});

d3.select('#test_1_btn_6').on('click', function(){
    $cont.select('span').classed('def abc', true);
    show();
});

d3.select('#test_1_btn_7').on('click', function(){
    $cont.select('span').classed({'def': false, 'ghi': true});
    show();
});




d3.select('#test_1_btn_10').on('click', function(){
    $cont.append('span').text(4);
    show();
});

d3.select('#test_1_btn_11').on('click', function(){
    $cont.append(function(d,i){
            // 函数返回必须时DOM
            return document.createElement('span'); 
        })
        .text(5);
    show();
});


d3.select('#test_1_btn_15').on('click', function(){
    $cont.insert('span', ':first-child').text(0);
    show();
});

d3.select('#test_1_btn_16').on('click', function(){
    $cont.insert('span').text(0);
    show();
});



d3.select('#test_1_btn_20').on('click', function(){
    $cont.select('span').remove();
    show();
});



d3.select('#test_1_btn_25').on('click', function(){
    var data = $cont.select('span').datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_1_btn_26').on('click', function(){
    var data = $cont.select('span')
                .data(['a', 'b', 'c'])
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_1_btn_27').on('click', function(){
    var data = $cont.select('span')
                .data('string')
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_1_btn_28').on('click', function(){
    var data = $cont.selectAll('span')
                .data(function(){
                    var i = 5, arr = [];
                    while(i >0){
                        arr.push('item ' + ( 5 - i + 1 ));
                        i--;
                    }
                    return arr;
                })
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_1_btn_29').on('click', function(){

    var selection = $cont.selectAll('span')
                .data(
                    [
                        { name: 'hudamin', value: 2 }
                        , { name: 'michael', value: 1 }
                        , { name: 'even', value: 3 }
                    ]
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                ;

    console.log(selection);

    selection = selection.data(
                    [
                        { name: 'hudamin', value: 20 }
                        , { name: 'even', value: 30 }
                    ]
                    , function(d){
                        return d.name;
                    }
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                .sort()
                ;

    selection.exit().remove();

    console.log(selection);
    var data = selection.datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_1_btn_30').on('click', function(){

    var selection = $cont.selectAll('span')
                .data(
                    [
                        { name: 'hudamin', value: 1 }
                        , { name: 'michael', value: 2 }
                        , { name: 'even', value: 3 }
                    ]
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                .classed('animated jello', 1)
                ;

    var __index = 1;
    selection.attr('data-index', function(){return __index++;});
    show();

    setTimeout(function(){
        selection.datum(function(){return this.dataset;})
            .sort(function(a, b){return b.index - a.index;})
            .classed({
                'jello': 0
                , 'rubberBand': 1
            })
            ;

        var data = selection.datum();
        show(JSON.stringify(data || []) );
    }, 2000);
});





    
})();


(function(){


var $cont = d3.select('#test_2 .test-container')
    , $console = d3.select('#test_2 .test-console');

function show(content){
    $console.text(content || $cont.html()); 
}

function append_show(content){
    $console.text(
        $console.text() 
        + ( content || $cont.html() )
    ); 
}

d3.select('#test_2_btn_1').on('click', function(){
    var data = $cont.select('span').datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_2_btn_2').on('click', function(){
    var data = $cont.select('span')
                .data(['a', 'b', 'c'])
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_2_btn_3').on('click', function(){
    var data = $cont.select('span')
                .data('string')
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_2_btn_4').on('click', function(){
    var data = $cont.selectAll('span')
                .data(function(){
                    var i = 5, arr = [];
                    while(i >0){
                        arr.push('item ' + ( 5 - i + 1 ));
                        i--;
                    }
                    return arr;
                })
                .datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_2_btn_5').on('click', function(){

    var selection = $cont.selectAll('span')
                .data(
                    [
                        { name: 'hudamin', value: 2 }
                        , { name: 'michael', value: 1 }
                        , { name: 'even', value: 3 }
                    ]
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                ;

    console.log(selection);

    selection = selection.data(
                    [
                        { name: 'hudamin', value: 20 }
                        , { name: 'even', value: 30 }
                    ]
                    , function(d){
                        return d.name;
                    }
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                .sort()
                ;

    selection.exit().remove();

    console.log(selection);
    var data = selection.datum();
    show(JSON.stringify(data || []) );
});

d3.select('#test_2_btn_6').on('click', function(){

    var selection = $cont.selectAll('span')
                .data(
                    [
                        { name: 'hudamin', value: 1 }
                        , { name: 'michael', value: 2 }
                        , { name: 'even', value: 3 }
                    ]
                )
                .text(function(d, i){
                    return d.name + ': ' + d.value;
                })
                .classed('animated jello', 1)
                ;

    var __index = 1;
    selection.attr('data-index', function(){return __index++;});
    show();

    setTimeout(function(){
        selection.datum(function(){return this.dataset;})
            .sort(function(a, b){return b.index - a.index;})
            .classed({
                'jello': 0
                , 'rubberBand': 1
            })
            ;

        var data = selection.datum();
        show(JSON.stringify(data || []) );
    }, 2000);
});


(function(){

var matrix = [
    [11975,  5871, 8916, 2868],
    [ 1951, 10048, 2060, 6171],
    [ 8010, 16145, 8090, 8045],
    [ 1013,   990,  940, 6907]
];

var initial = 1;

d3.select('#test_3_btn_1').on('click', function(){

    if( !initial ) return;
    initial = 0;

    var tr = d3.select('#test_3 .test-container').append('table')
        .selectAll('tr').data(matrix)
        .enter()
        .append('tr');

    var td = tr.selectAll('td')
        .data(function(d){ return d; })
        .enter()
        .append('td')
        .text(function(d){ return d; })
        .style('background-color', function(){ return randomColor(1); })
        .style('color', function(){ return randomColor(1); })
        ;

});

d3.select('#test_3_btn_2').on('click', function(){

    if(initial) return;

    var table = d3.select('#test_3 table');

    var old_matrix = matrix;

    matrix = old_matrix.slice(1);
    matrix.push(old_matrix[0]);

    var tr = table.selectAll('tr')
        .data(matrix)
        ;

    tr = table.selectAll('tr')
        .data(matrix)
        ;

    // update
    tr.selectAll('td')
        .data(function(d) { return d; })
        .transition()
        .duration(1000)
        .text(function(d){ return d; })
        .style('background-color', function(){ return randomColor(1); })
        .style('color', function(){ return randomColor(1); })
        .transition()
        .duration(200)
        .style('-webkit-transform', 'translate(10px, 0)')
        .transition()
        .duration(200)
        .style('-webkit-transform', 'translate(-10px, 0)')
        .transition()
        .duration(200)
        .style('-webkit-transform', 'translate(0, 0)')
        ;

});

})();

</script>


代码如下：

    var matrix = [
        [11975,  5871, 8916, 2868],
        [ 1951, 10048, 2060, 6171],
        [ 8010, 16145, 8090, 8045],
        [ 1013,   990,  940, 6907]
    ];

    d3.select('#test_3_btn_1').on('click', function(){

        var tr = d3.select('#test_3 .test-container').append('table')
            .selectAll('tr').data(matrix)
            .enter()
            .append('tr');

        var td = tr.selectAll('td')
            .data(function(d){ return d; })
            .enter()
            .append('td')
            .text(function(d){ return d; });

    });
